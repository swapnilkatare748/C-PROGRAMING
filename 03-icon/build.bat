cls

dell*.exe
dell*.obj
dell*.res
cl.exe /c /EHsc FirstWindow.c
rc.exe window.rc
link.exe FirstWindow.obj window.res user32.lib GDI32.lib /SUBSYSTEM:WINDOWS
firstwindow.exe
