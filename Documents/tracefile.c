2278  execve("./HelloWorld", ["./HelloWorld"], [/* 65 vars */]) = 0
2278  brk(NULL)                         = 0x102a000
2278  access("/etc/ld.so.nohwcap", F_OK) = -1 ENOENT (No such file or directory)
2278  access("/etc/ld.so.preload", R_OK) = -1 ENOENT (No such file or directory)
2278  open("/etc/ld.so.cache", O_RDONLY|O_CLOEXEC) = 3
2278  fstat(3, {st_mode=S_IFREG|0644, st_size=89592, ...}) = 0
2278  mmap(NULL, 89592, PROT_READ, MAP_PRIVATE, 3, 0) = 0x7f9ab7a5b000
2278  close(3)                          = 0
2278  access("/etc/ld.so.nohwcap", F_OK) = -1 ENOENT (No such file or directory)
2278  open("/lib/x86_64-linux-gnu/libc.so.6", O_RDONLY|O_CLOEXEC) = 3
2278  read(3, "\x7f\x45\x4c\x46\x02\x01\x01\x03\x00\x00\x00\x00\x00\x00\x00\x00\x03\x00\x3e\x00\x01\x00\x00\x00\x60\x09\x02\x00\x00\x00\x00\x00"..., 832) = 832
2278  fstat(3, {st_mode=S_IFREG|0755, st_size=1868984, ...}) = 0
2278  mmap(NULL, 4096, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7f9ab7a5a000
2278  mmap(NULL, 3971488, PROT_READ|PROT_EXEC, MAP_PRIVATE|MAP_DENYWRITE, 3, 0) = 0x7f9ab7482000
2278  mprotect(0x7f9ab7642000, 2097152, PROT_NONE) = 0
2278  mmap(0x7f9ab7842000, 24576, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x1c0000) = 0x7f9ab7842000
2278  mmap(0x7f9ab7848000, 14752, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_ANONYMOUS, -1, 0) = 0x7f9ab7848000
2278  close(3)                          = 0
2278  mmap(NULL, 4096, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7f9ab7a59000
2278  mmap(NULL, 4096, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7f9ab7a58000
2278  arch_prctl(ARCH_SET_FS, 0x7f9ab7a59700) = 0
2278  mprotect(0x7f9ab7842000, 16384, PROT_READ) = 0
2278  mprotect(0x600000, 4096, PROT_READ) = 0
2278  mprotect(0x7f9ab7a71000, 4096, PROT_READ) = 0
2278  munmap(0x7f9ab7a5b000, 89592)     = 0
2278  fstat(1, {st_mode=S_IFCHR|0620, st_rdev=makedev(136, 1), ...}) = 0
2278  brk(NULL)                         = 0x102a000
2278  brk(0x104b000)                    = 0x104b000
2278  write(1, "Hello Wolrd\n", 12)     = 12
2278  exit_group(0)                     = ?
2278  +++ exited with 0 +++
