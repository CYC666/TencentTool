

Pod::Spec.new do |s|



  s.name         = "TencentTool"
  s.version      = "0.0.2"
  s.summary      = "A tool create from CYC666"

  s.description  = "this is a tool of OC taht creat from CYC666"

  s.homepage     = "https://github.com/CYC666/TencentTool"

  s.license      = "MIT"

  s.author       = { "CYC666" => "13705038428@163.com" }



  s.source       = { :git => "https://github.com/CYC666/TencentTool.git", :tag => "#{s.version}" }

  s.source_files  = "TencentTool", "TencentTool/TencentTool/TencentTool/**/*.{h,m}"


end
