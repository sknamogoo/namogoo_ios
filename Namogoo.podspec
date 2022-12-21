Pod::Spec.new do |s|
    s.name         = "Namogoo"
    s.version      = "0.0.1"
    s.summary      = "Namogoo Customer Journey"
    s.description  = 'Namogoo provides convenient tracking suite for customer behaviour prediction.'
    s.homepage     = "http://namogoo.com"
    s.license = { :type => 'Copyright', :text => <<-LICENSE
                   Copyright 2023
                   Permission is granted to...
                  LICENSE
                }
    s.author             = { "Sergey Kostrykin" => "sergiy.kostrykin@namogoo.com" }
    s.source       = { :git => "https://github.com/sknamogoo/namogoo_ios", :tag => "#{s.version}" }
    s.vendored_frameworks = "Namogoo.xcframework"
    s.platform = :ios
    s.swift_version = "5.5"
    s.ios.deployment_target  = '13.0'
    s.frameworks = 'UIKit'
 
end
