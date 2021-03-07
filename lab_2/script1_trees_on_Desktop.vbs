Dim WSHShell, I, MyShortcut, MyDesktop, DesktopPath
Set WSHShell = WScript.CreateObject("WScript.Shell")
DesktopPath = WSHShell.SpecialFolders("Desktop") 
For I=1 To 200
Set MyShortcut = WSHShell.CreateShortcut(DesktopPath & "\Привет " & CStr(I) & ".lnk")
MyShortcut.WindowStyle = 4
MyShortcut.IconLocation = WSHShell.ExpandEnvironmentStrings("%SystemRoot%\system32\SHELL32.dll, 41")
MyShortcut.Save 
Next
