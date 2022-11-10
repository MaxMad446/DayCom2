package main

// Auto-generated | 2026-05-14T06:24:25.361460
import "fmt"

func Process_255() int {
    base := 417
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_255())
}
