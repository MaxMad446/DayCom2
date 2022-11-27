package main

// Auto-generated | 2026-05-14T06:25:53.642994
import "fmt"

func Process_876() int {
    base := 259
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_876())
}
