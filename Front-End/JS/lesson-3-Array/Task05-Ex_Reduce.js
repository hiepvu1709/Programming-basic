// trường hợp k truyền đối số
Array.prototype.reduce2 = function (callback, result) {
    let i = 0
    // muốn kiểm tra xem reduce có truyền initialValue hay k, ta chỉ cần cho đk nếu đối số < 2 thì tức là k truyền
    if (arguments.length < 2) {
        i = 1;
        result = this[0];   // bởi vì khi reduce k truyền initialValue thì cái biến tích trữ sẽ là phần tử đầu tiên của mảng
    }
    for (; i < this.length; i++) {
        result = callback (result, this[i], i, this)
    }
    // trong callback: result là biến tích trữ, this[i] là cái currentValue, i là index, this là cái array gốc
    return result;
}

// Cách hoạt động của reduce
// trong lần lặp đầu tiên, total  = 1, number = 2 , sau đó return ra là 3, và cái 3 này sẽ được lưu vào biến tích trữ mà biến tích trữ chính là result
// và đổi lần lặp tiếp theo thì total = 3 và number sẽ là phần tử kế tiếp = 3 và 3 + 3 = 6 return 6 và lưu vào biến tích trữ
// đến lần lặp tiếp total = 6 và number = 4 => 10 , lưu vào biến tích trữ
// cuối cùng total = 10 và number = 5 => return 15 vào biến tích trữ
// sau khi chạy hết các lần lặp thì cái biến tích trữ này sẽ đc return ra bên ngoài


// trường hợp truyền đối số
const numbers = [1, 2, 3, 4, 5];
const result = numbers.reduce2((total, number) => {
    return total + number;
});

// output results: 25, bởi vì trong reduce có đối số thứ hai là 10 ,lần chạy đầu tiên nó sẽ lấy 10+ phần tử đầu tiên rồi cộng tiếp các phần tử còn lại 
console.log(result);

// Tổng kết lại : khi k truyền giá trị khởi tạo cho reduce thì cái biến lữu trữ sẽ là phần tử đầu tiên của mảng và biến currentValue sẽ là phần tử thứ hai của mảng
// TRong trường hợp: truyền initialValue thì biến lưu trữ đầu tiên sẽ là initialValue