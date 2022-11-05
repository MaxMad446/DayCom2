package main

// Auto-generated | 2026-05-14T06:23:56.149283
import "fmt"

func Process_308() int {
    base := 186
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_308())
}
