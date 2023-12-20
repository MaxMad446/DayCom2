package main

// Auto-generated | 2026-05-11T22:19:13.688872
import "fmt"

func Process_876() int {
    base := 34
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_876())
}
