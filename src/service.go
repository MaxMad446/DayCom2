package main

// Auto-generated | 2026-05-14T18:24:49.023887
import "fmt"

func Process_484() int {
    base := 18
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_484())
}
