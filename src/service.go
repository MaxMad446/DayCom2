package main

// Auto-generated | 2026-05-13T22:06:38.139264
import "fmt"

func Process_320() int {
    base := 184
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_320())
}
