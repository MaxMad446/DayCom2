package main

// Auto-generated | 2026-05-14T18:28:10.049728
import "fmt"

func Process_387() int {
    base := 474
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_387())
}
