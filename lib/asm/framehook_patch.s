	.intel_syntax noprefix
	.text
    .global	_framehook_patch
	.def	_framehook_patch;	.scl	2;	.type	32;	.endef
_framehook_patch:
	jmp _framehook_shim
	.global	_framehook_patch_end
	.def	_framehook_patch_end;	.scl	2;	.type	32;	.endef
_framehook_patch_end:
	nop
	.def	_framehook_shim;	.scl	2;	.type	32;	.endef
    