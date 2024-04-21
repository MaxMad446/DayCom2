package main

// Auto-generated | 2026-05-14T18:26:11.499533
import "fmt"

func Process_706() int {
    base := 26
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_706())
}
