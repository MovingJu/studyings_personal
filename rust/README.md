# Cargo 쓰는법

- cargo 라이브러리들 바이너리 코드 관리하는 라이브러리
```bash
cargo install cargo-cache
```

- cargo install 로 깐 라이브러리 지우는법 (~/.cargo/bin 에 있는 것들)
```bash
cargo uninstall {library_name}
```

- cargo registry 관리 (현재 Cargo.toml에 없는 캐시 지워줌) (~/.cargo/regisrty 에 있는 것들)
```bash
cargo cache --remove-registry
```

- cargo 라이브러리 Cargo.toml 에 추가하기
```bash
cargo add {library name}
```