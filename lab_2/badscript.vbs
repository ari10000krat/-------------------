Dim B
Set B = WScript.CreateObject("Wscript.Shell")
MsgBox "Программа совершила недопустимую операцию и будет закрыта!",4144, "Windows"
B.Run("%windir%\system32\shutdown -s -f ")
