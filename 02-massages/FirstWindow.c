#include <windows.h>

// Global callback function prototype
LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);

// Entry point function
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpszCmdLine, int iCmdShow)
{
    // Variable declaration
    WNDCLASSEX wndclass;
    TCHAR szClassName[] = TEXT("MyFirstWindow");
    HWND hwnd;
    MSG msg;

    // Code
    wndclass.cbSize = sizeof(WNDCLASSEX);
    wndclass.style = CS_HREDRAW | CS_VREDRAW;
    wndclass.cbClsExtra = 0;
    wndclass.cbWndExtra = 0;
    wndclass.hInstance = hInstance;
    wndclass.hbrBackground = (HBRUSH)GetStockObject(BLACK_BRUSH);
    wndclass.hIcon = LoadIcon(NULL, IDI_APPLICATION);
    wndclass.hIconSm = LoadIcon(NULL, IDI_APPLICATION);
    wndclass.hCursor = LoadCursor(NULL, IDC_ARROW);
    wndclass.lpfnWndProc = WndProc;
    wndclass.lpszClassName = szClassName;
    wndclass.lpszMenuName = NULL;

    // Register window class
    RegisterClassEx(&wndclass);
   
    // Create the window
    hwnd = CreateWindow(szClassName,
        TEXT("Swapnil Katare: First Window"),
        WS_OVERLAPPEDWINDOW,
        CW_USEDEFAULT,
        CW_USEDEFAULT,
        CW_USEDEFAULT,
        CW_USEDEFAULT,
        NULL,
        NULL,
        hInstance,
        NULL);

    // Show the window
    ShowWindow(hwnd, iCmdShow);

    // Update the window
    UpdateWindow(hwnd);

    // Message loop
    while (GetMessage(&msg, NULL, 0, 0))
    {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    return (int)msg.wParam;
}

// Callback window procedure
LRESULT CALLBACK WndProc(HWND hwnd, UINT iMsg, WPARAM wParam, LPARAM lParam)
{   //wparam gives 16 bit information dete bout massage
    //ani lparam he taycha massage badhal 32 bit extra information dete
 
   // variable declaration
    TCHAR str[255];
    //wide character
    wchar_t ch;    //it only reconise characters a,b,c,d...
    int x, y;
    // Code
    switch (iMsg)
    {
    case WM_CREATE:                 //it comes first massage to windows and it comes only one time 
        wsprintf(str, TEXT("wm_creare massage received"));                             //text is the type of macro in windows.h
        MessageBox(NULL, str, TEXT("massage"), MB_OK | MB_ICONINFORMATION);           //is predefined window, thir are 4 paramitars aahet 1.hwnd 2.lpcstr 3.lpcstr 4.which button and icones
       // 2nd parameter massage 
        //3rd paramitar say what massage display title box in box  
        break;
    case WM_KEYDOWN:
       // ch = wParam;
        wsprintf(str, TEXT("wm_keydown massage received :"));           //this massage box is recoagnise the wich character is press
        MessageBox(NULL, str, TEXT("my_windows_massage"), MB_OK | MB_ICONINFORMATION);
        break;
    case WM_CHAR:
        ch = wParam;                                                                     
        wsprintf(str, TEXT("wm_CHAR massage received : %c"), ch);
        MessageBox(NULL, str, TEXT("my_windows_massage"), MB_OK | MB_ICONINFORMATION);
        break;

    case WM_LBUTTONDOWN:
        x = LOWORD(lParam);
        y = HIWORD(lParam);
        wsprintf(str, TEXT("left mous click at :(%d,%d) "),x,y);                          
        MessageBox(NULL, str, TEXT("massage"), MB_OK | MB_ICONINFORMATION);
        break;
    case WM_RBUTTONDOWN:
        x = LOWORD(lParam);
        y = HIWORD(lParam); 
        wsprintf(str, TEXT("right mous click at (%d,%d)"),x,y)
            ;
        MessageBox(NULL, str, TEXT("massage"), MB_OK | MB_ICONINFORMATION);
        break;
    case WM_DESTROY:
        wsprintf(str, TEXT("wm_DESTROY massage received"));                               //display the massage box after close the windows                           
        MessageBox(NULL, str, TEXT("massage"), MB_OK | MB_ICONERROR);
        PostQuitMessage(0);                                                              //hwnd,wn_quit,0,0l are the parameters of pastQuitmessage    
        break;
    default:
        break;
    }
    return DefWindowProc(hwnd, iMsg, wParam, lParam);
}
//wsprintf(str, TEXT("%s"), TEXT("wn_create message received"));
//MessageBox(NULL, str, TEXT("message"), MB_OK | MB_ICONINFORMATION);
// USE MSDN AND FIND THE ICONS AND BUTTON
// find wparam and documentatin assinments