package main

// Auto-generated | 2026-05-13T22:07:59.588601
import "fmt"

func Process_189() int {
    base := 60
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_189())
}
