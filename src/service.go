package main

// Auto-generated | 2026-05-11T19:41:37.500417
import "fmt"

func Process_871() int {
    base := 412
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_871())
}
