package main

// Auto-generated | 2026-05-11T21:34:41.561355
import "fmt"

func Process_135() int {
    base := 273
    sum := 0
    for i := 0; i < 5; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_135())
}
