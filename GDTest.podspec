Pod::Spec.new do |s|
	s.name = 'GDTest'
	s.version = '0.0.12'
	s.summary = 'GD SDK for iOS developers'
	s.homepage = 'https://github.com/guodong10518/GDTest'
	s.license = 'MIT'
	s.author = { 'guodong10518' => 'guodong10518@163.com' }
	s.platform = :ios, '7.0'
	s.source = { :git => 'https://github.com/guodong10518/GDTest.git', :tag => s.version }
    s.requires_arc = true

s.vendored_libraries = 'GDTest/libGDTest.a'
s.resource = 'GDTest/GDMobileSDKResource.bundle'
s.xcconfig = { 'OTHER_LDFLAGS' => '-ObjC' }

s.default_subspec = 'GDUtils', 'GDBasics', 'GDViews', 'GDControllers', 'GDStorages', 'GDNetwork'

s.subspec 'GDUtils' do |utils|
utils.source_files = 'GDTest/Header/GDUtils/*.h'
utils.public_header_files = 'GDTest/Header/GDUtils/*.h'
utils.frameworks = 'UIKit', 'Security', 'MapKit', 'CoreLocation', 'AVFoundation', 'QuartzCore'
utils.dependency 'JSONModel', '~> 1.0.2'
utils.dependency 'SDWebImage', '~> 3.7.1'
utils.dependency 'MJRefresh'
utils.dependency 'MBProgressHUD', '~> 0.9.1'
utils.dependency 'IQKeyboardManager'
utils.dependency 'NJKWebViewProgress'
end

s.subspec 'GDBasics' do |basics|
basics.source_files = 'GDTest/Header/GDBasic/*.h'
basics.public_header_files = 'GDTest/Header/GDBasic/*.h'
basics.frameworks = 'JavaScriptCore'
basics.dependency 'GDTest/GDUtils'
end

s.subspec 'GDViews' do |views|
views.source_files = 'GDTest/Header/GDViews/**/*.h'
views.public_header_files = 'GDTest/Header/GDViews/**/*.h'
views.header_mappings_dir = 'GDTest/Header/GDViews/'
views.frameworks = 'MediaPlayer'
views.dependency 'GDTest/GDUtils'
end

s.subspec 'GDControllers' do |controllers|
controllers.source_files = 'GDTest/Header/GDControllers/*.h'
controllers.public_header_files = 'GDTest/Header/GDControllers/*.h'
controllers.dependency 'GDTest/GDUtils'
end

s.subspec 'GDStorages' do |storages|
storages.source_files = 'GDTest/Header/GDStorages/*.h'
storages.public_header_files = 'GDTest/Header/GDStorages/*.h'
storages.dependency 'GDTest/GDUtils'
end

s.subspec 'GDNetwork' do |network|
network.source_files = 'GDTest/Header/GDNetwork/*.h'
network.public_header_files = 'GDTest/Header/GDNetwork/*.h'
network.dependency 'GDTest/GDUtils'
end

s.subspec 'GDServices' do |services|
services.source_files = 'GDTest/Header/GDServices/*.h'
services.public_header_files = 'GDTest/Header/GDServices/*.h'
services.dependency 'GDTest/GDUtils'
services.dependency 'GDTest/GDNetwork'
end

end