Dim Obj, I
Set Obj=WScript.CreateObject("WScript.Shell")
For I=1 To 100
Obj.Run "Rundll32.exe User32.dll,SetCursorPos"
WScript.Sleep(1000)
Next