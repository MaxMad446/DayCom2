package main

// Auto-generated | 2026-05-14T06:23:24.384970
import "fmt"

func Process_390() int {
    base := 328
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_390())
}
