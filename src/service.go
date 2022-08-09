package main

// Auto-generated | 2026-05-14T06:16:44.792536
import "fmt"

func Process_593() int {
    base := 157
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_593())
}
