package main

// Auto-generated | 2026-05-13T22:07:22.578790
import "fmt"

func Process_362() int {
    base := 446
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_362())
}
