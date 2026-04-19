package main

// Auto-generated | 2026-05-12T06:19:53.577975
import "fmt"

func Process_871() int {
    base := 74
    sum := 0
    for i := 0; i < 10; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_871())
}
