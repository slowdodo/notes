``` powershell
Set-ExecutionPolicy -ExecutionPolicy RemoteSigned
```
``` powershell
Get-NetAdapter
```
``` powershell
Get-NetAdapterHardwareInfo
```
``` powershell
Get-Service
```
``` powershell
GET-Service -Name Wsearch
```
``` powershell
Get-Service -Name W* | findstr Running
```
``` powershell
Get-Service -Name W*, *sd* | findstr Running
```


``` powershell
Get-Alias *s
```

``` powershell
Get-Verb 
```

``` powershell
Get-Command
```
``` powershell
Get-Command -CommandType function -Name Get* -Module netada*
```


``` powershell
Get-Service | Where-Object {$_.DisplayName -match "ab"}
```

``` powershell
Get-Service | Out-File command.txt
```
``` powershell
notepad.exe .\command.txt
```

``` powershell
Get-ChildItem
```
``` powershell
ls
```
``` powershell
Get-ChildItem -path c:\
```
``` powershell
Get-ChildItem -path c:\ -force
```
``` powershell
Get-ChildItem -path c:\ -force -Recurse
```

``` powershell
Set-Location c:\
```
``` powershell
cd c:\
```

``` powershell
Get-Variable
```
``` powershell
$env:COMPUTERNAME
```
``` powershell
$PSVersionTable
```

``` powershell
$cityname='soeoul'
```
``` powershell
$cityname
```

``` powershell
Write-Output 'HELLO, $cityname'
```

``` powershell
$mycred=Get-Credential
```
``` powershell
$mycred
```


``` powershell
Get-ChildItem | Out-File C:\Users\dbstj\Documents/test1.txt
```

``` powershell
$systeminfo = "$PSCulture, $env:COMPUTERNAME"
```
``` powershell
$systeminfo | Out-File C:\Users\dbstj\Documents/inostudy.ps1
```


``` powershell
Get-Process | Select-Object @{ Name = 'ProcessID'; eXPRESSION = 'ID'}
```


``` powershell
Get-Aliash dir
```