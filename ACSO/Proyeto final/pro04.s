	.data
	.balign	4
a1:	.float	0f0.0

	.balign	4
a2:	.float	0f0.0

	.balign	4
b1:	.float	0f0.0

	.balign	4
b2:	.float	0f0.0

	.balign	4
c1:	.float	0f0.0

	.balign	4
c2:	.float	0f0.0

	.balign	4
seg1:	.float	0f0.0

	.balign	4
seg2:	.float	0f0.0

	.balign	4
seg3:	.float	0f0.0

	.balign	4
c:	.float	0f0.0

	.balign	4
cant:	.float	0f0.0

	.balign	4
main_r:	.word	0

	.balign	4
frmt_s:	.asciz "%d"

	.balign	4
input:	.asciz "%f %f %f"

	.balign	4
frmt_p:	.asciz	"%f\n"

	.balign	4
printe:	.asciz	"%f "

	.balign	4
equilat:	.asciz	"equilatero\n"

	.balign	4
isoceles:	.asciz	"isoceles\n"

	.balign	4
escaleno:	.asciz	"escaleno\n"

	.balign	4
two:	.float	0f2.0

	.balign	4
azero:	.float	0f0.000001

	.text
	.global	main
	.func	main

main:	LDR		R0, =main_r
	STR		LR, [R0]

	LDR		R0, =frmt_s
	LDR		R1, =cant
	BL		scanf
	LDR		R8, =cant
	LDR		R8, [R8]
	SUB		R8, R8, #1
	LDR		R0, =cant
	STR		R8, [R0]
while:	CMP		R8, #0
	BGE		whilebody
	BAL		endwhile
whilebody:	LDR		R0, =input
	LDR		R1, =a1
	LDR		R2, =a2
	LDR		R3, =b1
	BL		scanf
	LDR		R0, =input
	LDR		R1, =b2
	LDR		R2, =c1
	LDR		R3, =c2
	BL		scanf
	LDR		R0, =a1
	VLDR.f32	S0, [R0]
	LDR		R0, =a2
	VLDR.f32	S1, [R0]
	LDR		R0, =b1
	VLDR.f32	S2, [R0]
	LDR		R0, =b2
	VLDR.f32	S3, [R0]
	LDR		R0, =c1
	VLDR.f32	S4, [R0]
	LDR		R0, =c2
	VLDR.f32	S5, [R0]
	VSUB.f32	S6, S2, S0
	VMUL.f32	S6, S6, S6
	VSUB.f32	S7, S3, S1
	VMUL.f32	S7, S7, S7
	VADD.f32	S8, S6, S7
	VSQRT.f32	S6, S8
	LDR		R0, =seg1
	VSTR		S6, [R0]
	VSUB.f32	S7, S4, S0
	VMUL.f32	S7, S7, S7
	VSUB.f32	S8, S5, S1
	VMUL.f32	S8, S8, S8
	VADD.f32	S9, S7, S8
	VSQRT.f32	S7, S9
	LDR		R0, =seg2
	VSTR		S7, [R0]
	VSUB.f32	S6, S4, S2
	VMUL.f32	S6, S6, S6
	VSUB.f32	S7, S5, S3
	VMUL.f32	S7, S7, S7
	VADD.f32	S8, S6, S7
	VSQRT.f32	S6, S8
	LDR		R0, =seg3
	VSTR		S6, [R0]
	LDR		R0, =seg1
	VLDR.f32	S0, [R0]
	LDR		R0, =seg2
	VLDR.f32	S1, [R0]
	LDR		R0, =seg3
	VLDR.f32	S2, [R0]
	VADD.f32	S3, S0, S1
	VADD.f32	S3, S3, S2
	LDR		R0, =c
	VSTR		S3, [R0]
	LDR		R0, =printe
	LDR		R1, =c
	VLDR.f32	S0, [R1]
	VCVT.f64.f32	D15, S0
	VMOV		R2, R3, D15
	BL		printf
	LDR		R0, =seg1
	VLDR.f32	S0, [R0]
	LDR		R0, =seg2
	VLDR.f32	S1, [R0]
	LDR		R0, =seg3
	VLDR.f32	S2, [R0]
	LDR		R0, =two
	VLDR.f32	S11, [R0]
	VDIV.f32	S4, S3, S11
	VSUB.f32	S5, S4, S0
	VMUL.f32	S5, S5, S4
	VSUB.f32	S6, S4, S1
	VMUL.f32	S5, S5, S6
	VSUB.f32	S6, S4, S2
	VMUL.f32	S5, S5, S6
	VSQRT.f32	S5, S5
	LDR		R0, =c
	VSTR		S5, [R0]
	LDR		R0, =printe
	LDR		R1, =c
	VLDR.f32	S0, [R1]
	VCVT.f64.f32	D15, S0
	VMOV		R2, R3, D15
	BL		printf
	LDR		R0, =seg1
	VLDR.f32	S1, [R0]
	LDR		R0, =seg2
	VLDR.f32	S2, [R0]
	LDR		R0, =seg3
	VLDR.f32	S3, [R0]
	LDR		R0, =azero
	VLDR.f32	S4, [R0]
	VSUB.f32	S5, S1, S2
	VABS.f32	S5, S5
	VCMP.f32	S5, S4
	VMRS		APSR_nzcv, FPSCR
	BLT		con1
	BAL		con2
con1:	VSUB.f32	S5, S1, S3
	VABS.f32	S5, S5
	VCMP.f32	S5, S4
	VMRS		APSR_nzcv, FPSCR
	BLT		equi
	BAL		iso
con2:	VSUB.f32	S5, S1, S3
	VABS.f32	S5, S5
	VCMP.f32	S5, S4
	VMRS		APSR_nzcv, FPSCR
	BLT		iso
	BAL		con3
con3:	VSUB.f32	S5, S2, S3
	VABS.f32	S5, S5
	VCMP.f32	S5, S4
	VMRS		APSR_nzcv, FPSCR
	BLT		iso
	BAL		esc
equi:	LDR		R0, =equilat
	BL		printf
	BAL		end
iso:	LDR		R0, =isoceles
	BL		printf
	BAL		end
esc:	LDR		R0, =escaleno
	BL		printf
	BAL		end
end:	LDR		R8, =cant
		LDR		R8, [R8]
		SUB		R8, R8, #1
		LDR		R0, =cant
		STR		R8, [R0]
	BAL		while
endwhile:	MOV		R0, #0
	LDR		LR, =main_r
	LDR		LR, [LR]
	BX		LR
	.endfunc
	.end


