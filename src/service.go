package main

// Auto-generated | 2026-05-11T19:57:10.494400
import "fmt"

func Process_834() int {
    base := 417
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_834())
}
