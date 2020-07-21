package main

// Auto-generated | 2026-05-11T19:35:52.852415
import "fmt"

func Process_172() int {
    base := 457
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_172())
}
