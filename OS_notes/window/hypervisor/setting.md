# hyperv?
`hyperv.bat` 스크립트는 window11에서 hypervisor가 기본적으로 깔리지 않아서 
<br>강제로 깔아주는 스크립트다. 

# hypervisor setting 

만약 wsl2를 쓸꺼면 
```powershell
bcdedit /set hypervisorlaunchtype auto
```

vmware를 사용할꺼면 
```powershell
bcdedit /set hypervisorlaunchtype off
```
