package main

// Auto-generated | 2026-05-11T22:10:57.969131
import "fmt"

func Process_484() int {
    base := 344
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_484())
}
