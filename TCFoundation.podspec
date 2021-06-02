#
#  Be sure to run `pod spec lint TCFoundation.podspec' to ensure this is a
#  valid spec and to remove all comments including this before submitting the spec.
#
#  To learn more about Podspec attributes see https://guides.cocoapods.org/syntax/podspec.html
#  To see working Podspecs in the CocoaPods repo see https://github.com/CocoaPods/Specs/
#

Pod::Spec.new do |spec|
  spec.name         = "TCFoundation"
  spec.version      = "1.0.1"
  spec.summary      = "iOS OC基础库Foundation"
  spec.description  = <<-DESC
                   iOS OC基础库Foundation，目前支持：network、io、config、event等基础功能
                   DESC
  spec.homepage     = "https://github.com/flatads/tcfundation"
  spec.license      = { :type => "MIT", :file => "LICENSE" }


  spec.author             = { "flatads" => "flatincbr.dev@gmail.com" }

  spec.source     = { :git => "https://github.com/flatads/tcfundation.git", :tag => "#{spec.version}" }
  
  spec.platform = :ios, "9.0"
  spec.ios.deployment_target = "9.0"
  
  spec.libraries = "c++"
  spec.requires_arc = true
  spec.static_framework = true
  
  spec.frameworks = 'Foundation', 'Security', 'SystemConfiguration', 'CoreTelephony', 'MobileCoreServices'

  spec.pod_target_xcconfig = {
    'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64'
  }

  spec.user_target_xcconfig = {
    'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64'
  }
  
  spec.vendored_frameworks = "TCFoundation/**/*.{framework}"

  spec.dependency "AFNetworking", "~> 4.0.1"
  spec.dependency "FMDB", "~> 2.6.2"
  spec.dependency "TCUtil", "~> 1.0.2"

end
