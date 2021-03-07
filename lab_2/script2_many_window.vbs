Dim WSHShell,I
Set WSHShell = WScript.CreateObject("Shell.Application")
On Error Resume Next 
For I=2 To 100 
WSHShell.Explore I 
Next
