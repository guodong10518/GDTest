Pod::Spec.new do |s|
	s.name = 'GDTest'
	s.version = '0.0.1'
	s.summary = 'GD SDK for iOS developers'
	s.homepage = 'https://github.com/guodong10518/GDTest'
	s.license = 'MIT'
	s.author = { 'guodong10518' => 'guodong10518@163.com' }
	s.platform = :ios, '7.0'
	s.source = { :git => 'https://github.com/guodong10518/GDTest.git', :tag => s.version }
    s.requires_arc = true

    s.xcconfig = { 'OTHER_LDFLAGS' => '-ObjC' }
    s.vendored_libraries = 'GDTest/libGDTest.a'
    s.source_files = 'GDTest/Header/**/*.h'
    s.public_header_files = 'GDTest/Header/**/*.h'
    s.frameworks = 'UIKit', 'Security', 'MapKit', 'CoreLocation', 'AVFoundation', 'QuartzCore', 'JavaScriptCore'
end