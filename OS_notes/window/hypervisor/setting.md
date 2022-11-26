# hyperv?
`hyperv.bat` 스크립트는 window11에서 hypervisor가 기본적으로 깔리지 않아서 
<br>강제로 깔아주는 스크립트다. 

# hypervisor setting 

윈도우는 하이퍼바이저를 사용할꺼냐, 아니냐로 양자택일 해야된다. 만약 자신이 vmware같은 가상머신을 사용하고자 한다면 2022년 11월을 기준으로 안타깝게도 wsl2는 사용을 못한다.  

만약 `wsl2` 를 쓸꺼면 
```powershell
bcdedit /set hypervisorlaunchtype auto
```

`vmware`를 사용할꺼면 
```powershell
bcdedit /set hypervisorlaunchtype off
```