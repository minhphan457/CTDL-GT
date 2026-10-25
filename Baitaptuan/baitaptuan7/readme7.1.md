Giải thuật: Sử dụng thuật toán chia để trị, so sánh giá trị mục tiêu với giá trị chính giữa của mảng, nếu giá trị của phần tử chính giữa bé hơn giá trị mục tiêu thì giá trị mục tiêu có thể là một phần tử nằm ở bên phải của mảng ban đầu, ngược lại nếu giá trị phần tử chỉnh giữa lớn hơn giá trị mục tiêu. 
Lặp lại quá trình so sánh với các mảng có kích thước nhỏ dần sau khi đệ quy, nếu phần tử chính giữa nhận được bằng với giá trị mục tiêu thì trả về vị trí ( index ) của phần tử đấy, hoặc thông báo không tìm thấy sau khi chia hết toàn bộ mảng.
Testcases:
-   Input :  nums = [2, 3, 5, 7, 8, 10, 12, 15, 18, 20]
            target = 7
    Output: "Element found at index 4"

-   Input : nums = [3 ,5 ,8 ,9 ,11 ,15 ]
            target = 67
    Output: "Element not found!"

