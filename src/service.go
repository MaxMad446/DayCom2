package main

// Auto-generated | 2026-05-14T06:24:09.413876
import "fmt"

func Process_202() int {
    base := 62
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_202())
}
