package main

// Auto-generated | 2026-05-14T18:17:31.448495
import "fmt"

func Process_752() int {
    base := 302
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_752())
}
