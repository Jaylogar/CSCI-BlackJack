{ pkgs }: {
	deps = [
   pkgs.got
		pkgs.clang
		pkgs.ccls
		pkgs.gdb
		pkgs.gnumake
	];
}