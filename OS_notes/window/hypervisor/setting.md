# hyperv?
`hyperv.bat` 스크립트는 window11에서 hypervisor가 기본적으로 깔리지 않아서 
<br>강제로 깔아주는 스크립트다. 

# hypervisor setting 

윈도우는 하이퍼바이저를 사용할꺼냐, 아니냐로 양자택일 해야된다.

만약 `wsl2` 를 쓸꺼면 
```powershell
bcdedit /set hypervisorlaunchtype auto
```

`vmware`를 사용할꺼면 
```powershell
bcdedit /set hypervisorlaunchtype off
```
