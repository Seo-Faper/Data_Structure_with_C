var password = '';  // 초기 password 값을 빈 문자열로 설정

for (var i = 0x0; i < password.length; i++) {

    new_text += String.fromCharCode(password.substr(i, 0x1).charCodeAt() ^ i * 0x25 % 0xa);

}

new_text = btoa(new_text);

// new_text 값이 'fr=5bnnzggf3q91dfouik'와 동일한지 확인
if (new_text == 'fr=5bnnzggf3q91dfouik') {
    location = password + _0x4f8c('0x2f');
}
