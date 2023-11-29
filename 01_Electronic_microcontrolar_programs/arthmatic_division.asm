org ooh
sjmp start 
divn: 
     mov a,R1
	 mov b,R2
	 dev ab
	 RET
start:
	 mov R1 = 09h;divident in r1
	 mov R2 = 01h
	 acall divn
	 mov R3,a
	 END