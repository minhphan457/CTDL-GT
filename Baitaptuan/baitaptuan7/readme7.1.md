1) Đề bài: Cho một dãy n phần tử đã được sắp xếp tăng dần và một giá trị mục tiêu ( target ), tìm kiếm trong mảng vị trí ( index ) của phần tử có giá trị bằng giá trị mục tiêu hoặc trả về không tìm thấy nếu không có giá trị nào trong mảng bằng với giá trị mục tiêu
2) Giải thuật: Sử dụng thuật toán chia để trị, so sánh giá trị mục tiêu với giá trị chính giữa của mảng, nếu giá trị của phần tử chính giữa bé hơn giá trị mục tiêu thì giá trị mục tiêu có thể là một phần tử nằm ở bên phải của mảng ban đầu, ngược lại nếu giá trị phần tử chỉnh giữa lớn hơn giá trị mục tiêu. 
Lặp lại quá trình so sánh với các mảng có kích thước nhỏ dần sau khi đệ quy, nếu phần tử chính giữa nhận được bằng với giá trị mục tiêu thì trả về vị trí ( index ) của phần tử đấy, hoặc thông báo không tìm thấy sau khi chia hết toàn bộ mảng.
3) Testcases:
-   Input :  A = [2, 3, 5, 7, 8, 10, 12, 15, 18, 20]
            target = 7
    Output: "Element found at index 4"

-   Input : A = [3 ,5 ,8 ,9 ,11 ,15 ]
            target = 67
    Output: "Element not found!"

