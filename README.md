## Độ phức tạp thuật toán tìm kiếm trên cây nhị phân tìm kiếm (BST)

Thuật toán tìm kiếm trên cây nhị phân tìm kiếm hoạt động bằng cách so sánh giá trị cần tìm với giá trị tại nút hiện tại:

* Nếu bằng nhau => tìm thấy.
* Nếu nhỏ hơn hoặc bằng => tiếp tục tìm ở cây con bên trái.
* Nếu lớn hơn => tiếp tục tìm ở cây con bên phải.

# Trường hợp tốt nhất

Giá trị cần tìm nằm ngay tại nút gốc của cây.

* Số phép so sánh: 1
* Độ phức tạp: O(1)

# Trường hợp trung bình

Cây có cấu trúc tương đối cân bằng, mỗi lần so sánh sẽ loại bỏ khoảng một nửa số nút cần xét.

* Chiều cao cây: h ≈ log₂(n)

* Độ phức tạp: O(log n)

# Trường hợp xấu nhất 

Cây bị lệch hoàn toàn thành một danh sách liên kết. Khi đó phải duyệt qua tất cả các nút từ gốc đến lá.

* Chiều cao cây: h = n

* Độ phức tạp: O(n)

# Kết luận

Độ phức tạp của thuật toán tìm kiếm trên cây nhị phân tìm kiếm (BST):

* Tốt nhất: O(1)
* Trung bình: O(log n)
* Xấu nhất: O(n)
