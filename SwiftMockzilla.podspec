Pod::Spec.new do |spec|
    spec.name                     = 'SwiftMockzilla'
    spec.version                  = '2.1.1-SNAPSHOT'
    spec.homepage                 = 'https://apadmi-engineering.github.io/Mockzilla/'
    spec.source                   = { :git => 'https://github.com/Apadmi-Engineering/SwiftMockzilla.git', :tag => 'vnull' }
    spec.authors                  = ''
    spec.license                  = {:type => 'MIT', :file => 'LICENSE'}
    spec.summary                  = 'A solution for running and configuring a local HTTP server to mimic REST API endpoints used by your application.'
                
    spec.libraries                = 'c++'
    spec.ios.deployment_target    = '13.0'
                
                
                
                
                
    spec.vendored_frameworks = 'Mockzilla.xcframework'
    spec.source_files = 'Sources/SwiftMockzilla/SwiftMockzilla.swift'
    spec.swift_version = '5.9.2'
end