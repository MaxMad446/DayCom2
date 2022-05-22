package main

// Auto-generated | 2026-05-13T22:12:27.417510
import "fmt"

func Process_823() int {
    base := 389
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_823())
}
