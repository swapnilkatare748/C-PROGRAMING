
	 
org 0H    ; Origin address is 0

start:  sjmp here   ; Jump to label 'here'

addn:   mov a, r1   ; Move the value in register R1 to accumulator A
        add a, #12   ; Add 12 to the accumulator A

here:   mov r1, #3   ; Move the value 3 to register R1

        acall addn  ; Call the subroutine 'addn'

        mov r0, a   ; Move the value in accumulator A to register R0

        sjmp here   ; Jump to label 'here'

        END         ; End of the program