package main

// Auto-generated | 2026-05-14T06:21:46.368000
import "fmt"

func Process_170() int {
    base := 339
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_170())
}
