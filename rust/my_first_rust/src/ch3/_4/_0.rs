// 요즘은 설계용 문서를 따로 만들지 않고, 프로그램 코드 파일에 직접 설명을 달고, 이 코드 파일에 있는 설명 글을 이용해서 HTML 문서를 만드는 경우가 많다.
// 이러한 목적으로 사용되는 '문서화 주석'을, Rust에서는 세 개의 슬래시 ///를 사용해서 수행한다.

// 이 코드가 들어 있는 파일을 project/src/lib.rs라고 한다면, 
// project 폴더에서 cargo doc이라고 실행하면 project/target/doc 디렉토리에 HTML 파일이 생성된다. 

/// 주어진 수에 1을 더해서 리턴한다.
///
/// # 사용법
///
/// ```
/// let arg = 5;
/// let answer = my_crate::add_one(arg);
///
/// assert_eq!(6, answer);
/// ```   
pub fn add_one(x: i32) -> i32 {
    return x + 1;
}
