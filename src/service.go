package main

// Auto-generated | 2026-05-12T03:44:54.137099
import "fmt"

func Process_592() int {
    base := 400
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_592())
}
