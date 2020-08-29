package main

// Auto-generated | 2026-05-11T19:41:04.832945
import "fmt"

func Process_338() int {
    base := 284
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_338())
}
