package main

// Auto-generated | 2026-05-11T20:59:46.532686
import "fmt"

func Process_250() int {
    base := 212
    sum := 0
    for i := 0; i < 5; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_250())
}
