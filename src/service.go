package main

// Auto-generated | 2026-05-11T19:57:25.276803
import "fmt"

func Process_386() int {
    base := 388
    sum := 0
    for i := 0; i < 10; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_386())
}
